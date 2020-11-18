template <>
void Condenser<DIM_2D>::BFaceMapCreate()
{
	Key<1> mSurf;
	Key<2> edge;
	for(MGSize ibf=0; ibf<mpGridActual->SizeBFaceTab(); ++ibf) //through bFaces
	{
		mSurf.rFirst() = mpGridActual->cBFace(ibf).cSurfId();// record mSurfId
		edge.rFirst()  = mpGridActual->cBFace(ibf).cId(0);
		edge.rSecond() = mpGridActual->cBFace(ibf).cId(1);
		edge.Sort();
		mBEdgeToBFIdMAP.insert(map< Key<2>, Key<1> >::value_type(edge, mSurf) );
	}
}

template <>
void Condenser<DIM_3D>::BFaceMapCreate()
{
	Key<2> mSurf;
	Key<2> edge;
	vector<pair<Key<2>, MGSize> > edgeSurfvec;
	for(MGSize ibf=0; ibf<mpGridActual->SizeBFaceTab(); ++ibf) //through bFaces
	{
		edge.rFirst() = mpGridActual->cBFace(ibf).cId(0); //0-1
		edge.rSecond() = mpGridActual->cBFace(ibf).cId(1);
		edge.Sort();
		edgeSurfvec.push_back( pair<Key<2>, MGSize>(edge, mpGridActual->cBFace(ibf).cSurfId() ));

		edge.rFirst() = mpGridActual->cBFace(ibf).cId(0);//0-2
		edge.rSecond() = mpGridActual->cBFace(ibf).cId(2);
		edge.Sort();
		edgeSurfvec.push_back( pair<Key<2>, MGSize>(edge, mpGridActual->cBFace(ibf).cSurfId() ));

		edge.rFirst() = mpGridActual->cBFace(ibf).cId(1);//1-2
		edge.rSecond() = mpGridActual->cBFace(ibf).cId(2);
		edge.Sort();
		edgeSurfvec.push_back( pair<Key<2>, MGSize>(edge, mpGridActual->cBFace(ibf).cSurfId() ));
	}
	sort( edgeSurfvec.begin(), edgeSurfvec.end() );

	vector<pair<Key<2>, MGSize> >::iterator it;
	it = unique (edgeSurfvec.begin(), edgeSurfvec.end()); // uniqe
	edgeSurfvec.resize( it - edgeSurfvec.begin() ); // resize

	for( ; !edgeSurfvec.empty(); )
	{
		edge           = edgeSurfvec.back().first; // take the last entry
		mSurf.rFirst() = edgeSurfvec.back().second;
		edgeSurfvec.pop_back(); //remove the lat entry

		if( edge == edgeSurfvec.back().first )//if the same edge, diff mSurf
		{
			mSurf.rSecond() = edgeSurfvec.back().second;
			edgeSurfvec.pop_back(); //remove the lat entry
			ASSERT( mSurf.cSecond() != mSurf.cFirst() );
		}
		else
			mSurf.rSecond() = mSurf.cFirst(); // copy
		mBEdgeToBFIdMAP.insert(map< Key<2>, Key<2> >::value_type(edge, mSurf) );
	}
}


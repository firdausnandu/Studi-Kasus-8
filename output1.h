void merge::output_awal(){
  cout<<"==============================================="<<endl;
	cout<<"\n   Karyawan Developer "<<endl;
cout<<"==============================================="<<endl;
	cout<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
    cout<<"==============================================="<<endl;
	cout<<endl;
  	for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<A[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
	cout<<endl;
  cout<<"==============================================="<<endl;
	cout<<"\n   Karyawan Admin "<<endl;
   cout<<"==============================================="<<endl;
	cout<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
   cout<<"==============================================="<<endl;
	cout<<endl;
  	for(i=0;i<2;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<B[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
}
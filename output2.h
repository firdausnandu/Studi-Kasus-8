void merge::output_gabung(){ cout<<"==============================================="<<endl;
  cout<<"\nData Semua Karyawan"<<endl;
 cout<<"==============================================="<<endl;
	cout<<"\n"<<setw(15)<<"Nama"<<setw(15)<<"Alamat"<<setw(15)<<"Jenis Kelamin"<<endl;
	cout<<endl;
  	for(i=0;i<6;i++){
  		for(j=0;j<3;j++){
  			cout<<setw(15)<<C[i][j]<<setw(15);
	  	}
	  	cout<<endl;
	}
}
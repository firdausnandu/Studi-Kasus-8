void merge::input(){
	cout<<"\n Masukan Data Karyawan Developer : \n";
	cout<<" 0.Nama  --  1.Alamat  --  2.Jenis Kelamin \n";
    for (i=0; i<3; i++){
		cout<<"\n";
		for (j=0; j<3; j++){
			cout<<"   ["<<j<<"]=";cin>>A[i][j];
			C[i][j]=A[i][j];
		}
	}
	cout<<"\n Masukan Data Karyawan Admin : \n";
	cout<<" 0.Nama  --  1.Alamat  --  2.Jenis Kelamin \n";
	for (i=0; i<2; i++){
		cout<<"\n";
		for (j=0; j<3; j++){	
			cout<<"   ["<<j<<"]=";cin>>B[i][j];
			C[i+3][j]=B[i][j];
		}
	}
}
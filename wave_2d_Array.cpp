

//cpp code 

void wave(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    int count=row*col;
    int starting_row=0;
    int ending_col=col-1;
    int starting_col=0;
       
       while(count!=0){
    for(int i=starting_col;i<=ending_col;i++){
        cout<<arr[starting_row][i]<<" ";
        count--;
    }
    starting_row++;

    for(int i=ending_col;i>=starting_col;i--){
        cout<<arr[starting_row][i]<<" ";
        count--;
    }
     starting_row++;
       }
}

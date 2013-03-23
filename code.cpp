void ascii()
{
	Mat image = imread(“7.jpg”);
	GaussianBlur(image,image, Size(5,5),0);
	Mat grayImage = Mat(image.size(), CV_32FC1);
	cvtColor(image, grayImage, CV_BGR2GRAY);
	ofstream f (“file.txt”);
        for(int i =0 ; i<grayImage.rows; ++i)
    	{
    		for(int j=0;j<grayImage.cols;++j)
    		{
    			if(grayImage.at<uchar>(i,j)>230)
    				f<<”`”;
    			else if(grayImage.at<uchar>(i,j)>200)
    				f<<”‘”;
    			else if(grayImage.at<uchar>(i,j)>160)
    				f<<”;”;
    			else if(grayImage.at<uchar>(i,j)>120)
    				f<<”O”;
    			else if(grayImage.at<uchar>(i,j)>80)
    				f<<”8″;
    			else if(grayImage.at<uchar>(i,j)>40)
    				f<<”N”;
    			else
    				f<<”M”;
    		}
    		f<<”\n”;
    	}
}



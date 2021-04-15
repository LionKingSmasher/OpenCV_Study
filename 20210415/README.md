
2021년 4월 15일 공부한 것
======

## 히스토그램 균일화
### 설명
* 히스토그램이란 픽셀들이 가지는 값들의 출현빈도를 의미한다.
* 히스토그램 균일화란 이러한 히스토그램을 이용하여, 한쪽에 모여있는 값들을 고르게 분포하여, 사진을 선명하게 해준다.
### 함수
* void cv::calcHist(const Mat* images,   
　　　　　　　　int nimages,  
　　　　　　　　const int* channels,  
　　　　　　　　InputArray mask,  
　　　　　　　　OutputArray hist,  
　　　　　　　　int dims,  
　　　　　　　　const int* histSize,  
　　　　　　　　const float** ranges,  
　　　　　　　　bool uniform=true,  
　　　　　　　　bool accumulate=false  
　　　　　　　　)
    + images: Histgram을 계산할 이미지들에 대한 배열
    + nimages: images 배열에 포함된 이미지의 개수
    + channels: Hisogram을 계산할 채널 번호들의 배열
    + maskL Hisogram을 계산할 영역을 지정할 수 있으나, Mat()를 전달하면 아무런 동작도하지 않음
    + hist: Histogram 계산 결과를 저장
    + dims: Histogram 계산결과를 저장한 hist의 차월을 의미함
    + histSize: 각 차원의 빈도수를 분류할 칸의 개수를 의미
    + ranges: 각 차원의 분류 bin의 최소값을 의미함
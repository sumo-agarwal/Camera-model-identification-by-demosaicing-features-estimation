%(c) Copyright Owner: Hong Cao and Alex C. Kot

This tool computes a set of demosaicing features which can be used for supporting various image forensics applications such as source model identification and forgery detection.
Please refer to the references below for details of the algorithm, its validations in various application contexts.


To Start With:
  Open up and Run the example script in 'scriptTest.m'
   


Main Feature Computation Function is contained in ComputeDemosaicingFeatures.p   

   [YY, CT, E_Stats] = ComputeDemosaicingFeatures(I)

   %Input:-------------------------
   I: RGB Marices of a color Image

   %Output:-------------------------
   YY: Prediction Coefficients
   E_Stats: Error Statistics
   CT: Count Feature


To speed up, 
   1. Use "mex" to compile "*.c" files to generate the corresponding mex files;
   2. Use the mex files to replace "Sqr2Col.m", "Sqr2Row.m" and "Sqr2TwoRow.m".  


Please cite the following refereances

[1] H. Cao and A.C. Kot, “Accurate Detection of Demosaicing Regularity for Digital Image Forensics,” IEEE Trans. on Information Forensics and Security, vol. 4(4-2), pp. 899-910, Dec. 2009
[2] H. Cao and A.C. Kot, “Manipulation Detection on Image Patches using FusionBoost,” IEEE Trans. on Information Forensics and Security, vol. 7(3), pp. 992-1002, 2012
[3] H. Cao and A.C. Kot, “A Generalized Model for Detection of Demosaicing Characteristics,” in Proc. of ICME, pp. 1513-1516, 2008
[4] H. Cao and A.C. Kot, “ Mobile Camera Identification Using Demosaicing Features,”   in Proc. of ISCAS, pp. 1683-1686, 2010


For any questions, please contact Dr Cao Hong at  sstarcao@gmail.com


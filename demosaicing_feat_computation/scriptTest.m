I = imread('testImg.bmp');
figure; imshow(I);
[YY, CT, E_Stats] = ComputeDemosaicingFeatures(I);
%YY: Demosaicing Coefficents
%CT: Distribution Features
%E_Stats: Error Statistics

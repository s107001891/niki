
# Chapter 1 文字與字形

## 1.1  在網頁中使用自訂字型
```
font-family: xujinglei;   /*使用自訂的字形樣式*/

src:url('xujinglei.ttf')  /*字形在網頁伺服器中的路徑*/

,url('xujinglei.eot');    /*IE 9+*/

font-size: 18px;          /*設定字型大小*/
```

## 1.2  文字縮排、凸排與首字下沉
```
text-indent: 15px;        /*使用像素作為單位,調整文字縮排*/

text-indent: -6px;        /*調整文字凸排*/

text-indent: 0.5em;       /*使用em作為單位,調整文字縮排*/

color: #B23AEE;           /*使用顏色代碼設定顏色*/

color: red;               /*使用顏色名字設定顏色*/

color:rgb(0,0,255);       /*使用rgb座標設定顏色*/

float: left;              /*浮動排列*/

.p:first-letter           /*設定每一段第一個文字*/
{ 
float: left;              /*讓字元產生下沉效果*/
}
```

## 1.3  自訂文字內容被選取的樣式
```

```

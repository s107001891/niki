
# Chapter 1 文字與字形

## 1.1  在網頁中使用自訂字型
```
font-family: xujinglei;     /*使用自訂的字形樣式*/

src:url('xujinglei.ttf')    /*字形在網頁伺服器中的路徑*/

,url('xujinglei.eot');      /*IE 9+*/

font-size: 18px;            /*設定字型大小*/
```

## 1.2  文字縮排、凸排與首字下沉
```
text-indent: 15px;          /*使用像素作為單位,調整文字縮排*/

text-indent: -6px;          /*調整文字凸排*/

text-indent: 0.5em;         /*使用em作為單位,調整文字縮排*/

color: #B23AEE;             /*使用顏色代碼設定顏色*/

color: red;                 /*使用顏色名字設定顏色*/

color:rgb(0,0,255);         /*使用rgb座標設定顏色*/

float: left;                /*浮動排列*/

.p:first-letter             /*設定每一段第一個文字*/
{ 
float: left;                /*讓字元產生下沉效果*/
text-transform: uppercase;  /*設定第一個英文字母大寫*/
}

text-transform: uppercase;  /*設定整段英文字母大寫*/

text-transform: lowercase;  /*設定整段英文字母小寫*/

text-transform: capitalize; /*設定整段英文,單字開頭大寫*/
```

## 1.3  自訂文字內容被選取的樣式
```
.p::selection {             /*設定文字反白時的呈現效果*/
  color: gold;              /*反白時字體顏色*/
  background-color: red;    /*反白時字體背景顏色*/
}
```
## 1.4  文字對齊
```
```
## 1.5  調整文字、字元的間距
```
```
## 1.6  文字樣式：畫線、粗體、斜體
```
```
## 1.7  文字陰影
```
```
## 1.8  文字毛玻璃效果
```
```
## 1.9  文字超出顯示範圍的處理
```
```
## 1.10 金屬質感的文字
```
```
## 1.11 隱藏文字內容
```
```
## 1.12 文字旋轉
```
```
## 1.13 現代字體集
```
```

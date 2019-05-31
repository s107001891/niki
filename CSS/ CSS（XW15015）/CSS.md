
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
text-align:left;            /*向左對齊*/

text-align:right;           /*向右對齊*/

text-align:center;          /*置中對齊*/

line-height:20px;           /*文字行高*/
```
## 1.5  調整文字、字元的間距
```
word-spacing: 5px;          /*設定空格長度*/

letter-spacing:10px;        /*設定文字間距*/

line-height: 24px;          /*設定文字行距*/ 

white-space: normal;        /*預設,連續的空白字元會被合併(collapse),換行字元被視為空白字元,換行只在被文字空間限制時發生*/

white-space: nowrap;        /*對待空白字元的方式跟 normal 一樣,且會強制不換行*/

white-space: pre;           /*連續的空白字元都會被保留,換行在有換行字元以及<br>時發生*/

white-space: pre-wrap;      /*連續的空白字元都會被保留,換行會在換行字元,有<br>元素以及被文字空間限制時發生*/

white-space: pre-line;      /*連續的空白字元會被合併(collapse),換行在換行字元, <br>以及被文字空間限制時發生*/

```
## 1.6  文字樣式：畫線、粗體、斜體
```
text-decoration: underline;     /*底線*/

text-decoration: overline;      /*頂線*/

text-decoration: line-through;  /*刪除線*/

text-decoration: blink;         /*文字閃爍,暫不支援*/

font-weight: bold;              /*粗體*/

font-style: italic;             /*斜體*/

font-style:oblique;             /*比 italic 更斜*/

```
## 1.7  文字陰影
```
text-shadow: 5px 5px 5px #FF0000;     /*水平陰影的位置,垂直陰影的位置,模糊的距離,陰影的顏色*/

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

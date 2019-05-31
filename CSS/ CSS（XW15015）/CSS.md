
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
{                                          /*使用文字陰影和字體透明色搭配,讓字體產生毛玻璃的視覺效果*/
box-shadow: 1px 1px 2px 2px #ccc inset;    /*水平陰影的位置,水平陰影的位置,垂直陰影的位置,模糊的距離,陰影的尺寸,陰影的顏色,外陰影改為內陰影*/

color:rgba(0,0,0,0);                       /*rgba(紅, 綠, 藍, 透明度)*/

text-shadow: 0 0 10px black;               /*水平陰影的位置,垂直陰影的位置,模糊的距離,陰影的顏色*/

}
```
## 1.9  文字超出顯示範圍的處理
```
div.hide{
overflow:hidden;}                    /*自動隱藏超出的文字或圖片*/

div.scroll{
overflow:scroll;}                    /*自動產生捲軸*/

div.clip{
overflow:hidden;                     
white-space: nowrap;                 /*強制在同一行顯示*/
text-overflow: clip;                 /*裁切*/
}

div.elli{
overflow:hidden;
white-space: nowrap;
text-overflow: ellipsis;             /*使用省略符號*/
}
```
## 1.10 金屬質感的文字
```
p {
    color:white;background:black;
    font-weight:bold;font-size:30px;
    position:relative;                                                        /*先對p定位,才能對浮動層進行絕對定位*/
}
span.cover {
    width:100%;height:100%;position:absolute;                                 /*浮動漸層位置*/
    background:linear-gradient(to bottom, black 0%, transparent 50%, black);
    opacity:0.5;                                                              /*設定透明度*/
}
```
## 1.11 隱藏文字內容
```
h1{
text-indent:-9999px;                            /*段落縮排*/
margin: 0 auto; width: 490px;height: 200px;     /*置中對齊*/  
background: url("img/123.jpg") no-repeat;       /*背景圖片*/
}

.screen-reader-text {
position: absolute;                             /*絕對定位*/
top: -9999px;                                   /*頂部位置點*/
left: -9999px;                                  /*左側位置點*/
}
```
## 1.12 文字旋轉
```
```
## 1.13 現代字體集
```
```

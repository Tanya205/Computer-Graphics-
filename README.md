## What is computer graphics?
#### Computer Graphics is the use of computer to define, store, manipulate and present pictorial output. 

#### Typically, the term computer graphics refers to several different things:
<ul> 
  <li> The representation and manipulation of image data by a computer </li>
  <li> The various technologies used to create and manipulate images. </li>
  <li> The sub-field of computer science which studies methods for digitally synthesizing and manipulating visual content. </li>
</ul>

## How is Computer graphics different from Image processing and Computer vision?
#### Computer graphics is referred to the process of creating images from abstract models, whereas Image processing refers to the process of starting with an existing image and refining it in some way to obtain another image. Computer vision refers to the process of computing an abstract model given an input image. 

## Applications of Computer Graphics
<ul>
  <li> Plotting in business </li>
  <li> Scientific visualization </li> 
  <li> Web/ business/ commercial publishing and advertisements </li> 
  <li> Entertainment (movie, TV advertisement, Games etc.) </li> 
  <li> CAD/ CAM design (construction, circuits) </li> 
  <li> Multimedia </li>
  <li> Virtual reality </li> 
  <li> Cartography- Drawing maps </li>
  <li> Education and training- Flight simulators, sport simultors, etc. </li>
  <li> Medical Imaging- MRIs, CT Scan, X ray </li>
</ul>


## Rasterization and Scan conversion
#### Rasterization: The process of determining which pixels provide the best approximation to the desired line is known as rasterization. When combined with the process of generating the picture in scan line order is known as scan conversion.


## Four attributes of drawing in computer graphics are:
<ol>
  <li> Lines </li>
  <li> Arcs/curves/ellipses/circles </li>
  <li> Drawing text on the screen </li>
  <li> Polygon drawing and its filling </li>
</ol>


## Line Drawing Algorithms
## 1. Digital Difference/ Differential Analyzer (DDA)
#### Given the starting and ending coordinates of a line, DDA Algorithm attempts to generate the points between the starting and ending coordinates. It is the simplest line drawing algorithm.

### The advantages of DDA Algorithm are- </font>
<ol>
  <li> It is a simple algorithm. </li>
  <li> It is easy to implement. </li>
  <li> It avoids using the multiplication operation which is costly in terms of time complexity. </li>
</ol>

### The disadvantages of DDA Algorithm are-
<ol>
  <li> The points generated by this algorithm are not accurate. </li>
  <li> Resulted lines are not smooth because of round off( ) function. </li>
  <li> Using round off( ) function increases time complexity of the algorithm. </li>
  <li> There is an extra overhead of using round off( ) function. </li>
</ol>
  


## 2. Bresenham Algorithm
### Advantages of Bresenham’s Line Drawing Algorithm - 
<ol>
  <li> It is quick and incremental. </li>
  <li> It is simple to implement because it only contains integers. </li>
  <li> It is fast to apply but not faster than the Digital Differential Analyzer (DDA) algorithm. </li>
  <li> The pointing accuracy is higher than the DDA algorithm. </li>
</ol>

### Disadvantages of Bresenham’s Line Drawing Algorithm -
<ol>
  <li>The resulted draw line is not smooth. </li>
  <li> The Bresenham’s Line drawing algorithm only helps to draw the basic line. </li>
</ol>



## 3. Mid-point algorithm
### The advantages of Mid Point Line Drawing Algorithm are-
<ol>
  <li> It is simple to implement. </li>
  <li> It uses basic arithmetic operations. </li>
  <li> The resulted line is smooth as compared to other line drawing algorithms. </li>
  <li> It takes less time for computation. </li>
  <li> Accuracy of finding points is a key feature of this algorithm. </li> 
</ol>

### The disadvantages of Mid Point Line Drawing Algorithm are-
<ol>
  <li>  This algorithm may not be an ideal choice for complex graphics and images. </li>
  <li> In terms of accuracy of finding points, improvement is still needed. </li>
  <li> There is no any remarkable improvement made by this algorithm. </li>
</ol>






### Solution 1

```js
#image {
    width: 100%;
    object-fit: contain;
}
```
### Solution 2

```js
function magic() {
    var i = 1;
    setTimeout(function () {
        console.log(i);
    }, 1000);
    console.log("You are getting it right. Right ?")
}

magic();
```
### Solution 3

```js
// Did you just used var instead of let ???

function magic() {
    for (let i = 1; i <= 5; i++) {
        setTimeout(function () {
            console.log(i);
        }, i * 1000);
    }
}

magic();

// Print the output without using let

function anotherMagic() {
    for (var i = 1; i <= 5; i++) {

        function close(x) {
            setTimeout(function () {
                console.log(x);
            }, x * 1000);
        }
        close(i);
    }
    console.log("Another Magic");
}

anotherMagic();
```
### Solution 4

```js
/* .first {
    font-size: 100px;
    background-color: rgb(184, 184, 184);
    border: 1px solid black;
    display: inline-block;
    margin: -2px;   
} */

/* Second Method */

.first {
    font-size: 100px;
    background-color: rgb(184, 184, 184);
    border: 1px solid black;
    display: inline-block;
}

.parent {
    font-size: 0px;
}
```
### Solution 4

```js
#image {
    width: 100%;
    object-fit: contain;
}
```
### Solution 5

```js
body {
    border: 2px solid black;
    padding: 5px;
}

h1,p {
    text-align: center;
}

img {
    width: 50vw;
    display: block;
    margin-left: auto;
    margin-right: auto;
}
```
### Solution 6

```js
#image {
    width: 100%;
    object-fit: contain;
}
```
### Solution 7

```js
let a = true;

setTimeout(() => {
    a = false;
}, 2000);

while (a) {
    console.log("Kiranpal Singh");
}
```

### Solution 8

```js
let count = 0;
let alpha = true;

setTimeout(() => {
    alpha = false;
}, 2000)

setInterval(() => {
    if (alpha) {
        console.log(count++);
    }
}, 200);


// let id = setInterval(() => {
//     console.log(count++);
// }, 200)

// setTimeout(() => {
//     clearInterval(id)
// }, 2000);
```
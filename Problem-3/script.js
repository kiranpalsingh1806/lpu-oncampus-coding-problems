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
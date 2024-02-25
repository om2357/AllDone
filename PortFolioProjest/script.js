// document.addEventListener("DOMContentLoaded", function () {
//     let darkModeIcon = document.querySelector(".darkMode-icon");

//     darkModeIcon.onclick = () => {
//     console.log("clicked");
//     darkModeIcon.classList.toggle("bxs-moon");
//     darkModeIcon.classList.toggle("bxs-sun");
//     document.body.classList.toggle("dark-mode");
//     };
// });
// let menuIcon = document.querySelector(".menu-icon");
document.addEventListener("DOMContentLoaded", function () {
    let menu = document.querySelector(".menu-icon");
    let navbar = document.querySelector(".navbar");
    let menuCloseIcon = document.querySelector(".menu-close-icon");
    let darkModeIcon = document.querySelector(".darkMode-icon");

    let menuIcon = document.querySelector("#menu");

    menuIcon.onclick = () => {
        menuIcon.classList.toggle("bx-menu");
        menuIcon.classList.toggle("bx-x");
    }

    darkModeIcon.onclick = () => {
    console.log("clicked");
    darkModeIcon.classList.toggle("bxs-moon");
    darkModeIcon.classList.toggle("bxs-sun");
    document.body.classList.toggle("dark-mode");
    };

    // menuIcon.onclick = () => {
    // console.log("cliked menu");
    // menuIcon.classList.toggle("hidden");
    // menuCloseIcon.classList.toggle("hidden");
    // navbar.classList.toggle("active");
    // };
    // menuCloseIcon.onclick = () => {
    // menuIcon.classList.toggle("hidden");
    // menuCloseIcon.classList.toggle("hidden");
    // navbar.classList.toggle("active");
    // };
    
});

let sections = document.querySelectorAll("section");

let navlinks = document.querySelectorAll("header nav a");

window.onscroll = () => {
    // let scrollPosition =
    // document.documentElement.scrollTop || document.body.scrollTop;

    sections.forEach((sec) => {
    let top = sec.offsetTop - 150;
    let bottom = top + sec.offsetHeight;
    let id = sec.getAttribute("id");

    if (scrollPosition >= top && scrollPosition < bottom) {
        navlinks.forEach((link) => {
        link.classList.remove("active");
        });

        document
        .querySelector('header nav a[href="#' + id + '"]')
        .classList.add("active");
        }
    });
    let header = document.querySelector(".header");

    header.classList.toggle("sticky", window.scrollY > 100)
    menuIcon.classList.remove("bx-x");
    navbar.classList.remove("active");
};

var swiper = new Swiper(".mySwiper", {
    slidesPerView: 1,
    spaceBetween: 50,
    loop: true,
    pagination: {
    el: ".swiper-pagination",
    clickable: true,
    },
    navigation: {
    nextEl: ".swiper-button-next",
    prevEl: ".swiper-button-prev",
    },
});

ScrollReveal({
    distance:'80px',
    duration:2000,
    delay:200
})
ScrollReveal().reveal(".home-content, .heading",{origin:'top'});

ScrollReveal().reveal('.home-img img, .services-container,.portfolio-box, .testimonial-wrapper, .contact',{origin:"bottom"})

ScrollReveal().reveal(".home-content h1,.about-img img", {origin:'left'});

ScrollReveal().reveal('.home-content h3, .home-content p,.about-content',{origin:'right'});


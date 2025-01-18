let fs = require('fs')
let os = require('os');

let user  = os.userInfo();
console.log(user);
fs.appendFile("greating.txt", 'hi ' + user.username + user.shell + '!', () => {
    console.log('file is created');
});
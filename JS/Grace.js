(function Grace() {
	/*
	   Comment
	*/
	const fs = require('fs')
	const output = "Grace_kid.js"
	const codeStr = "("+Grace.toString()+")()"

	fs.writeFile(output, codeStr, function(err) {
	    if (err) {
	        return console.error(err)
	    }
	})
})()
(function Sully() {
	const fs = require('fs')
	const { exec } = require('child_process')
	const codeStr = "("+Sully.toString()+")()"

    const currentFile = __filename.slice(__dirname.length + 1)

    let i = 5
    const prev_i = i

    if (i <= 0) return
    if (currentFile !== "Sully.js") i--
    
    const newFile = "Sully_"+i+".js" 

    fs.writeFile(newFile, codeStr.replace(`let i = ${prev_i}`, `let i = ${i}`), function(err) {
        if (err) return (console.log(err))
        else exec(`node ${newFile}`)
    })
})()
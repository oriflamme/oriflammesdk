
var shell = new ActiveXObject("WScript.Shell");
var fso = new ActiveXObject("Scripting.FileSystemObject");

var env = shell.Environment("USER");
env.item("ORIFLAMME_SDK_ROOT") = shell.CurrentDirectory;


WScript.Echo("OriflammeSDK�̃Z�b�g�A�b�v���I�����܂����B");

#IfWinActive, ahk_class PX_WINDOW_CLASS
	F4::
	send,^a
	sleep,100
	send,^v
	return

	F5::
	st_save()
	sleep, 500
	putty_run()
	return
#If

st_save(){
	send,^s
}

putty_run(){
	win_title = al_lab

	IfWinExist, %win_title%
	{
		WinActivate, %win_title%

		send,./go {enter}

		WinActivate, ahk_class PX_WINDOW_CLASS
	    
	}else{
		MsgBox "Window >>>"+%win_title%+"<<< not exist"
	}
}
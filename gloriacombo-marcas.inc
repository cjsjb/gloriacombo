\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*4

	% Gloria a Dios en el cielo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Te alabamos y te bendecimos...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Gloria a Dios en el cielo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Solo tu eres santo...
	\mark \default
	\skip 1*4
	\skip 1*4

	% La lara lala la la...
	\mark \default
	\skip 1*4
	%\skip 1*2
}

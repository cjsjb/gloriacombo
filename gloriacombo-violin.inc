\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		R1*4  |
%% 5
		d'' 1  |
		fis'' 2 fis'' 4 g''  |
		g'' 1  |
		b'' 4 a'' g'' fis''  |
		d'' 1  |
%% 10
		fis'' 2 fis'' 4 g''  |
		g'' 1  |
		b'' 4 a'' g'' fis''  |
		fis'' 2 fis''  |
		g'' 2 fis'' 4 e''  |
%% 15
		fis'' 2 fis''  |
		g'' 2 fis'' 4 e''  |
		e'' 1  |
		e'' 1  |
		fis'' 2 g''  |
%% 20
		a'' 1  |
		d'' 1  |
		fis'' 2 fis'' 4 g''  |
		g'' 1  |
		b'' 4 a'' g'' fis''  |
%% 25
		d'' 1  |
		fis'' 2 fis'' 4 g''  |
		g'' 1  |
		b'' 4 a'' g'' fis''  |
		g'' 1 ~  |
%% 30
		g'' 2 a'' 4 b''  |
		g'' 1 ~  |
		g'' 4 g'' g'' fis''  |
		e'' 1  |
		fis'' 1  |
%% 35
		g'' 1  |
		a'' 4 ~ a'' 8 a'' ~ a'' 4 fis''  |
		g'' 1  |
		R1  |
		r4 e'' fis'' g''  |
%% 40
		a'' 4 b'' 8 a'' 4. fis'' 4  |
		g'' 1  |
		R1  |
		\bar "|."
	}
>>

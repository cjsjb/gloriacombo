\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Violin"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key g \major

		R1*4  |
%% 5
		r4 d' 8 d' d' 4 b 8 d'  |
		fis' 4 ( g' 8 ) fis' ~ fis' 2  |
		r4 g' 8 g' g' 4 g'  |
		b' 4 a' 8 g' fis' 4 e'  |
		r4 d' 8 d' d' 4 b 8 d'  |
%% 10
		fis' 4 ( g' 8 ) fis' ~ fis' 2  |
		r4 g' 8 g' g' 4 g'  |
		b' 4 a' 8 g' fis' 4 e'  |
		r4 fis' 8 fis' fis' 4 fis'  |
		g' 8 g' g' fis' e' 4 e'  |
%% 15
		r4 fis' 8 fis' fis' 4 fis'  |
		g' 8 g' g' fis' e' 4 e'  |
		r8 e' e' e' \times 2/3 { e' 4 e' e' }  |
		e' 4 r e' 8 e' fis' g'  |
		a' 4 ( b' 8 ) a' ~ a' 2 ~  |
%% 20
		a' 1  |
		r4 d' 8 d' d' 4 b 8 d'  |
		fis' 4 ( g' 8 ) fis' ~ fis' 2  |
		r4 g' 8 g' g' 4 g'  |
		b' 4 a' 8 g' fis' 4 e'  |
%% 25
		r4 d' 8 d' d' 4 b 8 d'  |
		fis' 4 ( g' 8 ) fis' ~ fis' 2  |
		r4 g' 8 g' g' 4 g'  |
		b' 4 a' 8 g' fis' 4 e'  |
		r4 g' 8 g' 4 a' 8 g' 4  |
%% 30
		g' 4. g' 8 ~ g' 2  |
		r4 g' 8 g' 4 a' 8 g' 4  |
		b' 4 ( a' 8 g' ~ g' 2 )  |
		r8 e' e' e' e' fis' g' 4  |
		fis' 4 ( e' 8 ) fis' ~ fis' 2  |
%% 35
		r4 e' 8 e' e' e' fis' g'  |
		a' 4 ( b' 8 ) a' ~ a' 4 r  |
		g' 2 b' 8 a' g' fis' ~  |
		fis' 8 e' 4 d' 8 ~ d' 2  |
		r4 e' fis' g'  |
%% 40
		a' 4 b' 8 a' 4 r8 fis' 4  |
		g' 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		Glo -- "ria a" Dios en el cie __ lo
		"y en" la Tie -- rra paz a los hom -- bres.
		Glo -- "ria a" Dios en el cie __ lo
		"y en" la Tie -- rra paz a los hom -- bres.

		"Te a " -- la -- ba -- mos y te ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, te glo -- ri -- fi -- ca -- mos.
		Te da -- mos gra -- cias, Se -- ñor,
		por "tu in" -- men -- sa glo __ ria.

		Glo -- "ria a" Dios en el cie __ lo
		"y en" la Tie -- rra paz a los hom -- bres.
		Glo -- "ria a" Dios en el cie __ lo
		"y en" la Tie -- rra paz a los hom -- bres.

		Só -- lo "Tú e" -- res san -- to,
		só -- lo Tú, Se -- ñor, __
		con el Es -- pí -- ri -- tu San __ to,
		en la glo -- ria de Dios Pa __ dre.

		La la la la la la la
		la la la la la la.

		A -- mén.
	}
>>

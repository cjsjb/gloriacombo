\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzo"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Viola"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key g \major

		R1*4  |
%% 5
		r4 d' 8 d' d' 4 b 8 d'  |
		d' 4 ( e' 8 ) d' ~ d' 2  |
		r4 e' 8 e' e' 4 e'  |
		d' 4 d' 8 e' d' 4 d'  |
		r4 d' 8 d' d' 4 b 8 d'  |
%% 10
		d' 4 ( e' 8 ) d' ~ d' 2  |
		r4 e' 8 e' e' 4 e'  |
		d' 4 d' 8 e' d' 4 d'  |
		r4 d' 8 d' b 4 d'  |
		e' 8 e' e' d' b 4 b  |
%% 15
		r4 d' 8 d' b 4 d'  |
		e' 8 e' e' d' b 4 b  |
		r8 c' c' c' \times 2/3 { c' 4 c' c' }  |
		c' 4 r c' 8 c' c' c'  |
		d' 4 ( e' 8 ) d' ~ d' 2 ~  |
%% 20
		d' 1  |
		r4 d' 8 d' d' 4 b 8 d'  |
		d' 4 ( e' 8 ) d' ~ d' 2  |
		r4 e' 8 e' e' 4 e'  |
		d' 4 d' 8 e' d' 4 d'  |
%% 25
		r4 d' 8 d' d' 4 b 8 d'  |
		d' 4 ( e' 8 ) d' ~ d' 2  |
		r4 e' 8 e' e' 4 e'  |
		d' 4 d' 8 e' d' 4 d'  |
		r4 ees' 8 ees' 4 f' 8 ees' 4  |
%% 30
		d' 4. d' 8 ~ d' 2  |
		r4 ees' 8 ees' 4 f' 8 ees' 4  |
		d' 1  |
		r8 c' c' c' c' d' e' 4  |
		d' 4 ( c' 8 ) d' ~ d' 2  |
%% 35
		r4 c' 8 c' c' c' d' e'  |
		d' 4 ( e' 8 ) d' ~ d' 4 r  |
		g' 2 b' 8 a' g' fis' ~  |
		fis' 8 g' 4 a' 8 ~ a' 2  |
		r4 e' fis' g'  |
%% 40
		fis' 4 e' 8 d' 4 r8 d' 4  |
		d' 1  |
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
		só -- lo Tú, Se -- ñor,
		con el Es -- pí -- ri -- tu San __ to,
		en la glo -- ria de Dios Pa __ dre.

		La la la la la la la
		la la la la la la

		A -- mén.
	}
>>

/** @type {import('tailwindcss').Config} */
export default {
	darkMode: 'class',
	content: [
		"./index.html",
		"./src/**/*.{vue,js,ts,jsx,tsx}",
	],
	theme: {
		fontFamily:{
			'sans': ['Poppins', 'sans-serif'],
		},
		extend: {
			screens: {
				'xs': '448px',
			},
			colors: {
				primary: {
					50: 'rgb(var(--primary-50))',
					100: 'rgb(var(--primary-100))',
					200: 'rgb(var(--primary-200))',
					300: 'rgb(var(--primary-300))',
					400: 'rgb(var(--primary-400))',
					500: 'rgb(var(--primary-500))',
					600: 'rgb(var(--primary-600))',
					700: 'rgb(var(--primary-700))',
					800: 'rgb(var(--primary-800))',
					900: 'rgb(var(--primary-900))',
					950: 'rgb(var(--primary-950))'
				},
				surface: {
					0: 'rgb(var(--surface-0))',
					50: 'rgb(var(--surface-50))',
					100: 'rgb(var(--surface-100))',
					200: 'rgb(var(--surface-200))',
					300: 'rgb(var(--surface-300))',
					400: 'rgb(var(--surface-400))',
					500: 'rgb(var(--surface-500))',
					600: 'rgb(var(--surface-600))',
					700: 'rgb(var(--surface-700))',
					800: 'rgb(var(--surface-800))',
					900: 'rgb(var(--surface-900))',
					950: 'rgb(var(--surface-950))'
				}
			},
			zIndex: {
				"0": "0",
				"1": "1",
				"2": "2",
				"3": "3",
				"4": "4",
				"5": "5",
				"6": "6",
				"7": "7",
				"8": "8",
				"9": "9",
				"10": "10",
				"11": "11",
				"12": "12",
				"13": "13",
				"14": "14",
				"15": "15",
				"16": "16",
				"17": "17",
				"18": "18",
				"19": "19",
				"20": "20",
			}
		}

	},
	plugins: [],
}


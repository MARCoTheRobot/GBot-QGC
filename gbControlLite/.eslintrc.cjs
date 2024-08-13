module.exports = {
	root: true,
	env: {
		node: true
	},
	extends: [
		// add more generic rulesets here, such as:
		// 'eslint:recommended',
		'plugin:vue/vue3-recommended',
		'@vue/typescript/recommended'
		// 'plugin:vue/recommended' // Use this if you are using Vue.js 2.x.
	],
	rules: {
		// override/add rules settings here, such as:
		'vue/no-unused-vars': 'warn',
		"vue/html-indent": ["off", "tab"],
		"vue/multiline-html-element-content-newline": "off",
		"vue/singleline-html-element-content-newline": "off",
		"@typescript-eslint/ban-ts-comment": "off",
		"@typescript-eslint/no-explicit-any": "off",
		"vue/max-attributes-per-line": "off",
		"@typescript-eslint/no-unused-vars": "warn",
		"vue/first-attribute-linebreak": "off",
		"vue/html-closing-bracket-newline": "off"
	}
}
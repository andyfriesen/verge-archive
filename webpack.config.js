"use strict";

let path = require('path');
// let CopyWebpackPlugin = require('copy-webpack-plugin');

module.exports = {
    mode: 'production',

    entry: {
        main: "./main.tsx",
    },

    output: {
        path: __dirname + "/dist",
        filename: "app.js",
    },

    plugins: [
        // new CopyWebpackPlugin([
        //   { from: 'static/index.html' },
        // ]),
    ],

    resolve: {
        extensions: ['.ts', '.tsx', '.js'],
    },

    //devtool: 'source-map',

    module: {
        rules: [
            { test: /.tsx?$/, loader: 'ts-loader' }
        ]
    },
};

import { task, src, dest } from "gulp";
import babel from "gulp-babel";
import eslint from "gulp-eslint";

task("default", function () {
  src(["es6/**/*.js", "public/es6/**/*.js"]).pipe(babel()).pipe(eslint.format);

  src("es6/**/*.js").pipe(babel()).pipe(dest("dist"));

  src("public/es6/**/*.js").pipe(babel()).pipe(dest("public/dist"));
});

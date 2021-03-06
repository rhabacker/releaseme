# rubocop:disable Style/HashSyntax

# Adds gem management tasks among others build|install|release
require 'bundler/gem_tasks'

def cond_require(lib, &block)
  require lib
  block.yield
rescue LoadError
  warn "E: #{lib} not found. Not providing related Rake task."
end

require 'rake/testtask'
Rake::TestTask.new('test::unit') do |t|
  t.libs << 'test'
  t.libs << 'lib'
  t.options = '--pride'
  t.test_files = FileList['test/*_test.rb']
  t.verbose = true
end
Rake::TestTask.new('test::integration') do |t|
  t.options = '--pride'
  t.test_files = FileList['test/integration/*_test.rb']
  t.verbose = true
end

task :test => 'test::unit'

require 'rdoc/task'
RDoc::Task.new do |rdoc|
  rdoc.rdoc_files.include('lib/*.rb')
end

cond_require 'yard' do
  desc 'Yard documentation'
  YARD::Rake::YardocTask.new do |t|
    t.files   = ['lib/*.rb']
    t.options = ['--any', '--extra', '--opts']
    t.stats_options = ['--list-undoc']
  end
end

cond_require 'rubocop/rake_task' do
  desc 'Run RuboCop on the lib directory'
  RuboCop::RakeTask.new(:rubocop) do |task|
    task.patterns = ['lib/*.rb']
    task.formatters = ['files']
    task.fail_on_error = false
  end
  task :quality => :rubocop
end

task :default => :test

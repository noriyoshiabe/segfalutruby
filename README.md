# Segfalutruby

Force segmentation fault from ruby C extension

## Installation

Install the gem and add to the application's Gemfile by executing:

    $ bundle add segfalutruby --github noriyoshiabe/segfalutruby

If bundler is not being used to manage dependencies, install the gem by executing:

    $ gem install specific_install
    $ gem specific_install -l https://github.com/noriyoshiabe/segfalutruby

## Usage

    require "segfalutruby"
    Segfalutruby.exec

## Development

After checking out the repo, run `bin/setup` to install dependencies. You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and the created tag, and push the `.gem` file to [rubygems.org](https://rubygems.org).

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/[USERNAME]/segfalutruby.

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).

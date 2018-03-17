
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    strlen = mimes.keys.max_by(&:length).length
output = ''
output << '# Woah there. Do not edit this file directly.\n'
output << '# This file is generated automatically by script/vendor-mimes.\n\n'
mimes = mimes.sort_by { |k,v| k }
output << mimes.map { |mime,extensions| '#{mime.ljust(strlen)} #{extensions.join(' ')}' }.join('\n')
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
      attributes :id, :type, :name, :updated
    
          def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
        it 'reports attacks if reaction is to report' do
      io = StringIO.new
      mock_app do
        use Rack::Protection, :reaction => :report, :logger => Logger.new(io)
        run DummyApp
      end
      post('/', {}, 'rack.session' => {}, 'HTTP_ORIGIN' => 'http://malicious.com')
      expect(io.string).to match(/reported.*Origin/)
      expect(io.string).not_to match(/prevented.*Origin/)
    end
    
        # Returns the public URL of the attachment with a given style. This does
    # not necessarily need to point to a file that your Web server can access
    # and can instead point to an action in your app, for example for fine grained
    # security; this has a serious performance tradeoff.
    #
    # Options:
    #
    # +timestamp+ - Add a timestamp to the end of the URL. Default: true.
    # +escape+    - Perform URI escaping to the URL. Default: true.
    #
    # Global controls (set on has_attached_file):
    #
    # +interpolator+  - The object that fills in a URL pattern's variables.
    # +default_url+   - The image to show when the attachment has no image.
    # +url+           - The URL for a saved image.
    # +url_generator+ - The object that generates a URL. Default: Paperclip::UrlGenerator.
    #
    # As mentioned just above, the object that generates this URL can be passed
    # in, for finer control. This object must respond to two methods:
    #
    # +#new(Paperclip::Attachment, options_hash)+
    # +#for(style_name, options_hash)+
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
            def failure_message_when_negated
          'Should not have an attachment named #{@attachment_name}'
        end
        alias negative_failure_message failure_message_when_negated
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end
    
            def description
          'validate the size of attachment #{@attachment_name}'
        end
    
        module TableDefinition
      def attachment(*attachment_names)
        options = attachment_names.extract_options!
        attachment_names.each do |attachment_name|
          COLUMNS.each_pair do |column_name, column_type|
            column_options = options.merge(options[column_name.to_sym] || {})
            column('#{attachment_name}_#{column_name}', column_type, column_options)
          end
        end
      end
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
          def initialize(agent)
        @agent = agent
        logger.debug('[api-service] start') if logger.debug?
      end
    
      extend self

        
            def set_sequences(self, sequences):
        '''Set the list of sequences that include the message.'''
        self._sequences = list(sequences)
    
    def realwork(vars, moddefns, target):
    version_suffix = '%r%r' % sys.version_info[:2]
    print('# Makefile for Microsoft Visual C++ generated by freeze.py script')
    print()
    print('target = %s' % target)
    print('pythonhome = %s' % vars['prefix'])
    print()
    print('DEBUG=0 # Set to 1 to use the _d versions of Python.')
    print('!IF $(DEBUG)')
    print('debug_suffix=_d')
    print('c_debug=/Zi /Od /DDEBUG /D_DEBUG')
    print('l_debug=/DEBUG')
    print('temp_dir=Build\\Debug')
    print('!ELSE')
    print('debug_suffix=')
    print('c_debug=/Ox')
    print('l_debug=')
    print('temp_dir=Build\\Release')
    print('!ENDIF')
    print()
    
        def write_repr(self, out, visited):
        # Guard against infinite loops:
        if self.as_address() in visited:
            out.write('[...]')
            return
        visited.add(self.as_address())
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def test_sales_manager_shall_talk_through_proxy_with_delay(cls):
        cls.p.busy = 'No'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager ready to talk\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    ### OUTPUT ###
# jim got cartoon
# jack got music
# gee got movie
# jim got cartoon
# jim got cartoon
# gee got movie

    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    
@coroutine
def coroutine1(target):
    while True:
        request = yield
        if 0 < request <= 10:
            print('request {} handled in coroutine 1'.format(request))
        else:
            target.send(request)
    
    # Test the generator
count_to_two = lambda: count_to(2)
count_to_five = lambda: count_to(5)
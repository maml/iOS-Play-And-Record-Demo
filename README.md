iOS-Play-And-Record-Demo
========================

Demonstrates how to use AVFoundation's AVAudioRecorder and AVAudioPlayer to record and playback audio.

This code is in response to a question posed on StackOverflow about recorded audio playing back in the
simulator but not on the device. This happens when AVAudioSession is set to AVAudioSessionCategoryPlayAndRecord.
The audio actually does playback on the device, but at a barely audible volume.

Why this happens when using AVAudioSessionCategoryPlayAndRecord is not understood as Apple's documentation
states:
> This category is appropriate for simultaneous recording and playback, and also for apps that record and play back but not simultaneously.

An approach that resolves the issue is to set the session to AVAudioSessionCategoryPlayback when playing
back audio, and AVAudioSessionCategoryRecord when recording.

The app runs this way by default. It can be configured to reproduce the issue by setting IMPEDE_PLAYBACK to YES.

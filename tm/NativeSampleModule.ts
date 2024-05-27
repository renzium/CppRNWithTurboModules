import {TurboModule, TurboModuleRegistry} from 'react-native';

export interface Spec extends TurboModule {
  readonly reverseString: (input: string) => string;
  readonly addTwoNumbers: (a: number, b: number) => number;
}

export default TurboModuleRegistry.getEnforcing<Spec>('NativeSampleModule');

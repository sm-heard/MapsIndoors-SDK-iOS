//
//  MPLocationSource.h
//  MapsIndoors
//
//  Created by Daniel Nielsen on 26/10/2018.
//  Copyright © 2018 MapsPeople A/S. All rights reserved.
//

@import Foundation;
@import MapsIndoors;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - [INTERNAL - DO NOT USE]

/// > Warning: [INTERNAL - DO NOT USE]

@interface MPMapsIndoorsLocationSource : NSObject<MPLocationSource>

+ (BOOL) isOfflineDataAvailableForSolutionId:(NSString*)solutionId language:(NSString*)language;

- (void) synchronizeContentWithCompletion:(void(^_Nullable)(NSError*))completion;

- (void)addLocationsObserver:(id<MPLocationsObserver>)observer;

@property (nonatomic) MPLocationSourceStatus status;

@end

NS_ASSUME_NONNULL_END

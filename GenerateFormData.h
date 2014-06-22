/*
 *  Copyright (C) 2009 - 2014 Stephen F. Booth <me@sbooth.org>
 *  All Rights Reserved
 */

#pragma once

#import <Cocoa/Cocoa.h>

// ========================================
// Generates multipart/form-data from the given dictionary using the specified boundary
// ========================================
NSData * GenerateFormData(NSDictionary *formValues, NSString *boundary) NS_RETURNS_RETAINED;

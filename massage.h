/*
 * Copyright 2016, Victor van der Veen
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __MASSAGE_H__
#define __MASSAGE_H__

int defrag(int alloc_timer, int heap_id);
int ionExhaust(std::vector<struct ion_data *> &chunks, int min_bytes, int heap_id, bool mmap = true);
int ionExhaustSys(std::vector<struct ion_data *> &chunks, int heap_id, bool mmap = true); 

#endif

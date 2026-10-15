/*
 * Compat shim for the old bionic-era android::UniquePtr<T>, which
 * exynos_gatekeeper.cpp includes unqualified as <UniquePtr.h>. The modern
 * tree only ships namespaced copies (gatekeeper::UniquePtr, keymaster::
 * UniquePtr), so provide a minimal drop-in backed by std::unique_ptr - the
 * only operations this source uses are construction/destruction and .get().
 */
#ifndef EXYNOS_GATEKEEPER_COMPAT_UNIQUE_PTR_H
#define EXYNOS_GATEKEEPER_COMPAT_UNIQUE_PTR_H

#include <memory>

template <typename T>
using UniquePtr = std::unique_ptr<T>;

#endif

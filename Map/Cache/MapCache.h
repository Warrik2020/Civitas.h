#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Cache
{
    class MapCache : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapCache(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Cache", "MapCache") {}
    public:
        void* ComputeHash(void* bytes) const { void* __callArgs[] = { bytes }; return CallStatic("ComputeHash", __callArgs, 1); }
        void* ResolveCacheDir(void* opts) const { void* __callArgs[] = { opts }; return CallStatic("ResolveCacheDir", __callArgs, 1); }
        void* CacheFilePath(const char* cacheDir, const char* fullHash) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(cacheDir ? cacheDir : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(fullHash ? fullHash : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; return CallStatic("CacheFilePath", __callArgs, 2); }
        bool TryRead(const char* path, const char* expectedHash, void* opts, void* data) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(expectedHash ? expectedHash : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, opts, &data }; return CallStaticValue<bool>("TryRead", __callArgs, 4); }
        void Write(const char* path, void* data, const char* fullHash, const char* sourceFile, void* opts) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(fullHash ? fullHash : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(sourceFile ? sourceFile : "") : nullptr; void* __callArgs[] = { managed_0, data, managed_2, managed_3, opts }; CallStatic("Write", __callArgs, 5); }
        int CacheVersion() const { return ReadStaticField<int>("CacheVersion"); }
    };
}

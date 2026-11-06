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
        void* ComputeHash(void* bytes) const { void* args[] = { bytes }; return CallStatic("ComputeHash", args, 1); }
        void* ResolveCacheDir(void* opts) const { void* args[] = { opts }; return CallStatic("ResolveCacheDir", args, 1); }
        void* CacheFilePath(const char* cacheDir, const char* fullHash) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(cacheDir ? cacheDir : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(fullHash ? fullHash : "") : nullptr; void* args[] = { managed_0, managed_1 }; return CallStatic("CacheFilePath", args, 2); }
        bool TryRead(const char* path, const char* expectedHash, void* opts, void* data) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(expectedHash ? expectedHash : "") : nullptr; void* args[] = { managed_0, managed_1, opts, &data }; return CallStaticValue<bool>("TryRead", args, 4); }
        void Write(const char* path, void* data, const char* fullHash, const char* sourceFile, void* opts) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(fullHash ? fullHash : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(sourceFile ? sourceFile : "") : nullptr; void* args[] = { managed_0, data, managed_2, managed_3, opts }; CallStatic("Write", args, 5); }
        void* From(void* o) const { void* args[] = { o }; return CallStatic("From", args, 1); }
        int CacheVersion() const { return ReadStaticField<int>("CacheVersion"); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* sourceHash() const { return ReadField<void*>("sourceHash"); }
        void SetSourceHash(void* value) const { WriteField<void*>("sourceHash", value); }
        void* sourceFile() const { return ReadField<void*>("sourceFile"); }
        void SetSourceFile(void* value) const { WriteField<void*>("sourceFile", value); }
        void* generatedAt() const { return ReadField<void*>("generatedAt"); }
        void SetGeneratedAt(void* value) const { WriteField<void*>("generatedAt", value); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void SetHeight(int value) const { WriteField<int>("height", value); }
        void* settings() const { return ReadField<void*>("settings"); }
        void SetSettings(void* value) const { WriteField<void*>("settings", value); }
        void* islands() const { return ReadField<void*>("islands"); }
        void SetIslands(void* value) const { WriteField<void*>("islands", value); }
        int minIslandArea() const { return ReadField<int>("minIslandArea"); }
        void SetMinIslandArea(int value) const { WriteField<int>("minIslandArea", value); }
        int minHoleArea() const { return ReadField<int>("minHoleArea"); }
        void SetMinHoleArea(int value) const { WriteField<int>("minHoleArea", value); }
        int chaikinIterations() const { return ReadField<int>("chaikinIterations"); }
        void SetChaikinIterations(int value) const { WriteField<int>("chaikinIterations", value); }
        float rdpEpsilon() const { return ReadField<float>("rdpEpsilon"); }
        void SetRdpEpsilon(float value) const { WriteField<float>("rdpEpsilon", value); }
        int thresholdR() const { return ReadField<int>("thresholdR"); }
        void SetThresholdR(int value) const { WriteField<int>("thresholdR", value); }
        bool dilate() const { return ReadField<bool>("dilate"); }
        void SetDilate(bool value) const { WriteField<bool>("dilate", value); }
        int closeRadius() const { return ReadField<int>("closeRadius"); }
        void SetCloseRadius(int value) const { WriteField<int>("closeRadius", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int area() const { return ReadField<int>("area"); }
        void SetArea(int value) const { WriteField<int>("area", value); }
        void* outer() const { return ReadField<void*>("outer"); }
        void SetOuter(void* value) const { WriteField<void*>("outer", value); }
        void* holes() const { return ReadField<void*>("holes"); }
        void SetHoles(void* value) const { WriteField<void*>("holes", value); }
        void* pts() const { return ReadField<void*>("pts"); }
        void SetPts(void* value) const { WriteField<void*>("pts", value); }
    };
}

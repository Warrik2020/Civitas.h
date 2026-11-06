#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapManager") {}
    public:
        void ApplyStylePack(void* pack) const { void* args[] = { pack }; Call("ApplyStylePack", args, 1); }
        void SetReliefScale(float scale) const { void* args[] = { &scale }; Call("SetReliefScale", args, 1); }
        void BeginBuild() const { Call("BeginBuild", nullptr, 0); }
        int DownsampleFor(int srcW, int srcH) const { void* args[] = { &srcW, &srcH }; return CallValue<int>("DownsampleFor", args, 2); }
        void* Load(const char* pngPath, void* options) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(pngPath ? pngPath : "") : nullptr; void* args[] = { managed_0, options }; return CallStatic("Load", args, 2); }
        void* LoadGenerated(void* settings, void* options) const { void* args[] = { settings, options }; return CallStatic("LoadGenerated", args, 2); }
        void* ResolveSourcePath() const { return Call("ResolveSourcePath", nullptr, 0); }
        void* ResolveStreamingSourcePath() const { return Call("ResolveStreamingSourcePath", nullptr, 0); }
        void* GetCacheFilePathOrNull() const { return Call("GetCacheFilePathOrNull", nullptr, 0); }
    };
}

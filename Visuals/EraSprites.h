#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Visuals
{
    class EraSprites : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EraSprites(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Visuals", "EraSprites") {}
    public:
        void SetOverride(const char* path, void* tex) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, tex }; CallStatic("SetOverride", args, 2); }
        void* Get(const char* path, int px, bool mipmaps = false) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &px, &mipmaps }; return CallStatic("Get", args, 3); }
        bool IsMissing(const char* path) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("IsMissing", args, 1); }
        void* Fit(void* src, int w, int h, int size, int& outW, int& outH) const { void* args[] = { src, &w, &h, &size, &outW, &outH }; return CallStatic("Fit", args, 6); }
    };
}

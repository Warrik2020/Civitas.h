#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class ThumbCache : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ThumbCache(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "ThumbCache") {}
    public:
        void* FileFor(const char* dir, const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(dir ? dir : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0, managed_1 }; return CallStatic("FileFor", args, 2); }
        bool TryRead(const char* file, void* pixels, int& w, int& h) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0, &pixels, &w, &h }; return CallStaticValue<bool>("TryRead", args, 4); }
        void Write(const char* file, void* pixels, int w, int h) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0, pixels, &w, &h }; CallStatic("Write", args, 4); }
    };
}

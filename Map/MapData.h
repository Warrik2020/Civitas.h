#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapData : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapData(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapData") {}
    public:
        void* islands() const { return ReadField<void*>("islands"); }
        void SetIslands(void* value) const { WriteField<void*>("islands", value); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void SetHeight(int value) const { WriteField<int>("height", value); }
        bool fromCache() const { return ReadField<bool>("fromCache"); }
        void SetFromCache(bool value) const { WriteField<bool>("fromCache", value); }
    };
}

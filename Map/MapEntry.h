#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapEntry") {}
    public:
        void* path() const { return ReadField<void*>("path"); }
        void path(void* value) const { WriteField<void*>("path", value); }
        void* file() const { return ReadField<void*>("file"); }
        void file(void* value) const { WriteField<void*>("file", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        int width() const { return ReadField<int>("width"); }
        void width(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void height(int value) const { WriteField<int>("height", value); }
        int64_t stamp() const { return ReadField<int64_t>("stamp"); }
        void stamp(int64_t value) const { WriteField<int64_t>("stamp", value); }
    };
}

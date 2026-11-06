#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MapShelf : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapShelf(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MapShelf") {}
    public:
        float LandShareOf(void* entry) const { void* __callArgs[] = { entry }; return CallStaticValue<float>("LandShareOf", __callArgs, 1); }
        void* Attach(void* parent, const char* loadedMapPath, void* onImport = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* __callArgs[] = { parent, managed_1, onImport }; return CallStatic("Attach", __callArgs, 3); }
        void Rescan(const char* loadedMapPath = nullptr) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* __callArgs[] = { managed_0 }; Call("Rescan", __callArgs, 1); }
        void SelectByFile(const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* __callArgs[] = { managed_0 }; Call("SelectByFile", __callArgs, 1); }
    };
}

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
        float LandShareOf(void* entry) const { void* args[] = { entry }; return CallStaticValue<float>("LandShareOf", args, 1); }
        void* Attach(void* parent, const char* loadedMapPath, void* onImport = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* args[] = { parent, managed_1, onImport }; return CallStatic("Attach", args, 3); }
        void Rescan(const char* loadedMapPath = nullptr) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(loadedMapPath ? loadedMapPath : "") : nullptr; void* args[] = { managed_0 }; Call("Rescan", args, 1); }
        void SelectByFile(const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0 }; Call("SelectByFile", args, 1); }
        void* entry() const { return ReadField<void*>("entry"); }
        void SetEntry(void* value) const { WriteField<void*>("entry", value); }
        bool newWorld() const { return ReadField<bool>("newWorld"); }
        void SetNewWorld(bool value) const { WriteField<bool>("newWorld", value); }
        void* ground() const { return ReadField<void*>("ground"); }
        void SetGround(void* value) const { WriteField<void*>("ground", value); }
        void* shot() const { return ReadField<void*>("shot"); }
        void SetShot(void* value) const { WriteField<void*>("shot", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* foot() const { return ReadField<void*>("foot"); }
        void SetFoot(void* value) const { WriteField<void*>("foot", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* job() const { return ReadField<void*>("job"); }
        void SetJob(void* value) const { WriteField<void*>("job", value); }
    };
}

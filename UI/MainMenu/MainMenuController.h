#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MainMenuController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MainMenuController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MainMenuController") {}
    public:
        void RefuseToMenu(const char* why, int kind) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { managed_0, &kind }; CallStatic("RefuseToMenu", args, 2); }
        void* shelf() const { return ReadField<void*>("shelf"); }
        void SetShelf(void* value) const { WriteField<void*>("shelf", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* dials() const { return ReadField<void*>("dials"); }
        void SetDials(void* value) const { WriteField<void*>("dials", value); }
        void* sizePicker() const { return ReadField<void*>("sizePicker"); }
        void SetSizePicker(void* value) const { WriteField<void*>("sizePicker", value); }
        void* seedInput() const { return ReadField<void*>("seedInput"); }
        void SetSeedInput(void* value) const { WriteField<void*>("seedInput", value); }
        void* nameInput() const { return ReadField<void*>("nameInput"); }
        void SetNameInput(void* value) const { WriteField<void*>("nameInput", value); }
        void* amount() const { return ReadField<void*>("amount"); }
        void SetAmount(void* value) const { WriteField<void*>("amount", value); }
        void* islands() const { return ReadField<void*>("islands"); }
        void SetIslands(void* value) const { WriteField<void*>("islands", value); }
        void* coast() const { return ReadField<void*>("coast"); }
        void SetCoast(void* value) const { WriteField<void*>("coast", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* saveJob() const { return ReadField<void*>("saveJob"); }
        void SetSaveJob(void* value) const { WriteField<void*>("saveJob", value); }
        void* size() const { return ReadField<void*>("size"); }
        void SetSize(void* value) const { WriteField<void*>("size", value); }
        float sizeWanted() const { return ReadField<float>("sizeWanted"); }
        void SetSizeWanted(float value) const { WriteField<float>("sizeWanted", value); }
        bool shareUnknown() const { return ReadField<bool>("shareUnknown"); }
        void SetShareUnknown(bool value) const { WriteField<bool>("shareUnknown", value); }
        void* world() const { return ReadField<void*>("world"); }
        bool generate() const { return ReadField<bool>("generate"); }
        void SetGenerate(bool value) const { WriteField<bool>("generate", value); }
        void* fit() const { return ReadField<void*>("fit"); }
        void SetFit(void* value) const { WriteField<void*>("fit", value); }
        void* fitBody() const { return ReadField<void*>("fitBody"); }
        void SetFitBody(void* value) const { WriteField<void*>("fitBody", value); }
        void* window() const { return ReadField<void*>("window"); }
        void SetWindow(void* value) const { WriteField<void*>("window", value); }
    };
}

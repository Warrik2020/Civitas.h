#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class ScenarioPreviewCard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioPreviewCard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "ScenarioPreviewCard") {}
    public:
        void* Capture(void* card, const char* pathWithoutExtension, void* result) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(pathWithoutExtension ? pathWithoutExtension : "") : nullptr; void* args[] = { card, managed_1, result }; return CallStatic("Capture", args, 3); }
        int Width() const { return ReadStaticField<int>("Width"); }
        int Height() const { return ReadStaticField<int>("Height"); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* byline() const { return ReadField<void*>("byline"); }
        void SetByline(void* value) const { WriteField<void*>("byline", value); }
        void* facts() const { return ReadField<void*>("facts"); }
        void SetFacts(void* value) const { WriteField<void*>("facts", value); }
        void* source() const { return ReadField<void*>("source"); }
        void SetSource(void* value) const { WriteField<void*>("source", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        bool ok() const { return ReadField<bool>("ok"); }
        void SetOk(bool value) const { WriteField<bool>("ok", value); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        void* error() const { return ReadField<void*>("error"); }
        void SetError(void* value) const { WriteField<void*>("error", value); }
    };
}

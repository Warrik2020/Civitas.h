#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TemplateDesigner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TemplateDesigner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TemplateDesigner") {}
    public:
        void OpenFor(int cls, int templateId = -1) const { void* args[] = { &cls, &templateId }; CallStatic("OpenFor", args, 2); }
        void Close() const { CallStatic("Close", nullptr, 0); }
        void ResetZoom() const { Call("ResetZoom", nullptr, 0); }
        void Tick() const { Call("Tick", nullptr, 0); }
        void* input() const { return ReadField<void*>("input"); }
        void SetInput(void* value) const { WriteField<void*>("input", value); }
        void* minus() const { return ReadField<void*>("minus"); }
        void SetMinus(void* value) const { WriteField<void*>("minus", value); }
        void* plus() const { return ReadField<void*>("plus"); }
        void SetPlus(void* value) const { WriteField<void*>("plus", value); }
        void* viewport() const { return ReadField<void*>("viewport"); }
        void SetViewport(void* value) const { WriteField<void*>("viewport", value); }
        void* content() const { return ReadField<void*>("content"); }
        void SetContent(void* value) const { WriteField<void*>("content", value); }
        void* scroll() const { return ReadField<void*>("scroll"); }
        void SetScroll(void* value) const { WriteField<void*>("scroll", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* thumb() const { return ReadField<void*>("thumb"); }
        void SetThumb(void* value) const { WriteField<void*>("thumb", value); }
        void* thumbKey() const { return ReadField<void*>("thumbKey"); }
        void SetThumbKey(void* value) const { WriteField<void*>("thumbKey", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* figures() const { return ReadField<void*>("figures"); }
        void SetFigures(void* value) const { WriteField<void*>("figures", value); }
        void* problem() const { return ReadField<void*>("problem"); }
        void SetProblem(void* value) const { WriteField<void*>("problem", value); }
        void* count() const { return ReadField<void*>("count"); }
        void SetCount(void* value) const { WriteField<void*>("count", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* lines() const { return ReadField<void*>("lines"); }
        void SetLines(void* value) const { WriteField<void*>("lines", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* summary() const { return ReadField<void*>("summary"); }
        void SetSummary(void* value) const { WriteField<void*>("summary", value); }
        void* empty() const { return ReadField<void*>("empty"); }
        void SetEmpty(void* value) const { WriteField<void*>("empty", value); }
        void* add() const { return ReadField<void*>("add"); }
        void SetAdd(void* value) const { WriteField<void*>("add", value); }
        void* addLabel() const { return ReadField<void*>("addLabel"); }
        void SetAddLabel(void* value) const { WriteField<void*>("addLabel", value); }
        int built() const { return ReadField<int>("built"); }
        void SetBuilt(int value) const { WriteField<int>("built", value); }
        bool builtDense() const { return ReadField<bool>("builtDense"); }
        void SetBuiltDense(bool value) const { WriteField<bool>("builtDense", value); }
        void* rows() const { return ReadField<void*>("rows"); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* outline() const { return ReadField<void*>("outline"); }
        void SetOutline(void* value) const { WriteField<void*>("outline", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* figures() const { return ReadField<void*>("figures"); }
        void SetFigures(void* value) const { WriteField<void*>("figures", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* stripe() const { return ReadField<void*>("stripe"); }
        void SetStripe(void* value) const { WriteField<void*>("stripe", value); }
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void SetB(void* value) const { WriteField<void*>("b", value); }
        void* c() const { return ReadField<void*>("c"); }
        void SetC(void* value) const { WriteField<void*>("c", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void SetRetired(bool value) const { WriteField<bool>("retired", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        void* side() const { return ReadField<void*>("side"); }
        void SetSide(void* value) const { WriteField<void*>("side", value); }
        void* outline() const { return ReadField<void*>("outline"); }
        void SetOutline(void* value) const { WriteField<void*>("outline", value); }
    };
}

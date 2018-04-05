//
// NewBackup.xaml.h
// Declaration of the NewBackup class
//

#pragma once

#include "NewBackup.g.h"

namespace RoboApp
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class NewBackup sealed
	{
	public:
		NewBackup();
	private:
		void btnClose_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}

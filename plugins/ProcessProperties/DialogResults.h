
#ifndef PROCESS_PROPERTIES_DIALOG_RESULTS_H_20191119_
#define PROCESS_PROPERTIES_DIALOG_RESULTS_H_20191119_

#include "ui_DialogResults.h"
#include <QDialog>
#include <QSortFilterProxyModel>

class QSortFilterProxyModel;

namespace ProcessPropertiesPlugin {

class ResultsModel;
struct Result;

class DialogResults : public QDialog {
	Q_OBJECT

public:
	explicit DialogResults(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());

public:
	void addResult(const Result &result);

private Q_SLOTS:
	void on_tableView_doubleClicked(const QModelIndex &index);

public:
	int resultCount() const;

private:
	Ui::DialogResults ui;
	ResultsModel *model_                = nullptr;
	QSortFilterProxyModel *filterModel_ = nullptr;
};

}

#endif
